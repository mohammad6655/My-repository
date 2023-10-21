#include <iostream>
#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];
char check(void);
void init_matrix(void);
void get_player_move(int);
void get_remove_player(int);
void disp_matrix(void);

int main()
{
  char done;
  int rep = 0;
  std::cout << "This is the game of tic tac toe" << '\n';
  std::cout << "You will playing against computer" << '\n';
  done = '  ';
  init_matrix();
  disp_matrix();
  do
  {
    if (rep < 3)
      get_player_move(1);
    else
      get_remove_player(1);
    disp_matrix();
    done = check();
    if (done != '  ')
      break;
    if (rep < 3)
      get_player_move(2);
    else
      get_remove_player(2);
    disp_matrix();
    done = check();
    rep++;
  } while (done == ' ');
  if (done == '1')
    std::cout << "player1 won!" << '\n';
  else
    std::cout << "player2 !!!" << '\n';
  return 0;
}
void init_matrix(void)
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      matrix[i][j] = '  ';
}
void get_player_move(int m)
{
  int x, y;
  gotoxy(15, 0);
  std::cout << "Enter player" << m << " [X,Y]: ";
  std::cin >> x >> y;
  int test = (x > 3 || y > 3 || x < 0 || y < 0);
  x--;
  y--;
  if (matrix[x][y] != '  ' || test)
  {
    std::cout << " Invalid move ,try again " << '\n';
    get_player_move(m);
  }
  else if (m == 1)
    matrix[x][y] = '1';
  else
    matrix[x][y] = '2';
}
void get_remove_player(int m)
{
  int x, y;
  gotoxy(0, m + 19);
  std::cout << "Enter remove player" << m << " [X,Y]: ";
  std::cin >> x >> y;
  int test = (x > 3 || y > 3 || x < 0 || y < 0);
  x--;
  y--;
  if (matrix[x][y] != 48 + m || test)
  {
    std::cout << " Invalid move ,try again " << '\n';
    get_player_move(m);
  }
  else
    matrix[x][y] = '  ';
  get_player_move(m);
}
void disp_matrix(void)
{
  gotoxy(0, 5);
  for (int i = 0; i < 3; i++)
  {
    std::cout << "  " << matrix[i][0] << " | " << matrix[i][1] << " | " << matrix[i][2];
    if (i != 2)
      std::cout << '\n'
                << "---|---|---" << '\n';
  }
  char check(void)
  {
    for (int i = 0; i < 3; i++)
      if (matrix[i][0] = matrix[i][1] && matrix[i][0] == matrix[i][2])
        return matrix[i][0];
    for (int i = 0; i < 3; i++)
      if (matrix[0][i] = matrix[1][i] && matrix[0][i] == matrix[2][i])
        return matrix[0][i];
    for (int i = 0; i < 3; i++)
      if (matrix[0][0] = matrix[1][1] && matrix[1][1] == matrix[2][2])
        return matrix[0][0];
    for (int i = 0; i < 3; i++)
      if (matrix[0][2] = matrix[1][1] && matrix[1][1] == matrix[2][0])
        return matrix[0][2];
    return '  ';
  }
  std::cout << '\n';
}
// void gotoxy(int x, int y)
// {
//   static HANDLE h = NULL;
//   if (!h)
//     h = GetStdHandle(STD_OUTPUT_HANDLE);
//   COORD c = {x, y};
//   SetConsoleCursorPosition(h, c);
// }