// Ссылка на задачу: https://informatics.msk.ru/mod/statements/view.php?chapterid=2963#1

#include <iostream>
#include <vector>
#include <queue>

size_t GetMinimalStepsAmount(size_t start_number, size_t finish_number, size_t number_to_add, size_t number_to_multiply) {
  std::vector<size_t> used(finish_number + 1, 0);
  std::queue<size_t> numbers_to_check;
  std::vector<size_t> minimal_steps_amounts;
  used[start_number] = 1;
  numbers_to_check.push(start_number);
  minimal_steps_amounts[start_number] = 0;
  while (!numbers_to_check.empty()) {
    used[numbers_to_check.front()] = 2;
    size_t number_to_check = numbers_to_check.front();
    numbers_to_check.pop();
    if (number_to_check + number_to_add <= finish_number && used[number_to_check + number_to_add] == 0) {
      used[number_to_check + number_to_add] = 1;
      numbers_to_check.push(number_to_check + number_to_add);
      minimal_steps_amounts[number_to_check + number_to_add] = minimal_steps_amounts[number_to_check] + 1;
    }
   if (number_to_check * number_to_multiply <= finish_number && used[number_to_check * number_to_multiply] == 0) {
     used[number_to_check * number_to_multiply] = 1;
     numbers_to_check.push(number_to_check * number_to_multiply);
     minimal_steps_amounts[number_to_check * number_to_multiply] = minimal_steps_amounts[number_to_check] + 1;
   }
  }
  return minimal_steps_amounts[finish_number];
}