#include "..\Solver\Class.h"
#include "..\Solver\Student.h"
#include "..\Solver\Subject.h"
#include "..\Solver\Teacher.h"
#include "..\Solver\Timetable.h"
#include <sstream>
#include <iostream>

int main() {
    School::Subject math("Математика", "Естественные науки");
    School::Subject history("История", "Гуманитарные науки");

    School::Teacher teacher1("Иванов Иван Иванович", "Математика");
    School::Teacher teacher2("Петрова Светлана Александровна", "История");

    School::Student student1("Петров Алексей");
    student1.addGrade("Математика", 5);
    student1.addGrade("История", 4);

    School::Student student2("Сидорова Марина");
    student2.addGrade("Математика", 3);
    student2.addGrade("История", 5);

    School::SchoolClass class10A("10A", &teacher1);
    class10A.addStudent(student1);
    class10A.addStudent(student2);

    School::Timetable timeTable;
    timeTable.addStudentLesson("Петров Алексей", "Математика");
    timeTable.addStudentLesson("Петров Алексей", "История");
    timeTable.addStudentLesson("Сидорова Марина", "Математика");
    timeTable.addStudentLesson("Сидорова Марина", "История");

    timeTable.addTeacherLesson("Иванов Иван Иванович", "Понеделник", "Математика");
    timeTable.addTeacherLesson("Петрова Светлана Александровна", "Среда", "История");

    std::stringstream output;

    output << class10A.showClassTeacher();

    output << class10A.showStudents();

    output << student1.showGrades();

    output << class10A.showStudentsWithoutThrees();

    output << timeTable.showStudentTimetable("Петров Алексей");
    output << timeTable.showStudentTimetable("Сидорова Марина");

    output << timeTable.showTeacherTimetable("Иванов Иван Иванович");
    output << timeTable.showTeacherTimetable("Петрова Светлана Александровна");

    std::cout << output.str();

    return 0;
}