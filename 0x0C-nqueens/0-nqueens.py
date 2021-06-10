#!/usr/bin/python3


import sys


def board_generator(N):
    board = [['-' for i in range(N)] for j in range(N)]
    return board


def isSafe(board, r, c):
    for i in range(r):
        if board[i][c] == 'Q':
            return False

    (i, j) = (r, c)
    while i >= 0 and j >= 0:
        if board[i][j] == 'Q':
            return False
        i = i - 1
        j = j - 1

    (i, j) = (r, c)
    while i >= 0 and j < N:
        if board[i][j] == 'Q':
            return False
        i = i - 1
        j = j + 1

    return True


def print_sols(board):
    sol = []
    for i in range(N):
        for j in range(N):
            if board[i][j] == 'Q':
                sol.append([i, j])
    print(sol)


def nQueen_solver(board, r):
    if r == N:
        print_sols(board)
        return

    for i in range(N):
        if isSafe(board, r, i):
            board[r][i] = 'Q'
            nQueen_solver(board, r + 1)
            board[r][i] = '–'


if __name__ == "__main__":

    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        exit(1)

    try:
        N = int(sys.argv[1])
        if N < 4:
            print("N must be at least 4")
            exit(1)

    except ValueError:
        print("N must be a number")
        exit(1)

    Qboard = board_generator(N)
    nQueen_solver(Qboard, 0)
