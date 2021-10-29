//Copyright 2021 by AllMightyWeak

#include "Header.hpp"
#include "Student.hpp"
#include "iostream"

int main(int argc, char** argv)
{
  nlohmann::json data = inputJson(argc, argv);
  std::vector<Student> students = pasrJson(data);
  print(students, std::cout);
}

