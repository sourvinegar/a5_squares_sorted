#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "squares.hpp"

TEST_CASE("All negative numbers")
{
    const int n = 5;
    int *arr = new int[n]{-6, -4, -2, -2, -1};
    int *square = new int[n]{1, 4, 4, 16, 36};
    sorted_squares(arr, n);
  
    for(int i = 0; i < n; i++)
    {
        REQUIRE(arr[i] == square[i]);
    }
}

TEST_CASE("All positive numbers")
{
    const int n = 5;
    int *arr = new int[n]{1, 2, 3, 4, 5};
    int *square = new int[n]{1, 4, 9, 16, 25};
    sorted_squares(arr, n);
  
    for(int i = 0; i < n; i++)
    {
        REQUIRE(arr[i] == square[i]);
    } 
}

TEST_CASE("Negative number has largest magnitude")
{
    const int n = 5;
    int *arr = new int[n]{-6, -4, -2, 1, 4};
    int *square = new int[n]{1, 4, 16, 16, 36};
    sorted_squares(arr, n);
  
    for(int i = 0; i < n; i++)
    {
        REQUIRE(arr[i] == square[i]);
    }
}

TEST_CASE("Positive number has largest magnitude")
{
    const int n = 5;
    int *arr = new int[n]{-2, -1, 0, 1, 5};
    int *square = new int[n]{0, 1, 1, 4, 25};
    sorted_squares(arr, n);
  
    for(int i = 0; i < n; i++)
    {
        REQUIRE(arr[i] == square[i]);
    }
}

TEST_CASE("Size 1")
{
    const int n = 1;
    int *arr = new int[n]{2};
    int *square = new int[n]{4};
    sorted_squares(arr, n);
  
    for(int i = 0; i < n; i++)
    {
        REQUIRE(arr[i] == square[i]);
    }
}

TEST_CASE("Size 2")
{
    const int n = 2;
    int *arr = new int[n]{-5, 2};
    int *square = new int[n]{4, 25};
    sorted_squares(arr, n);
  
    for(int i = 0; i < n; i++)
    {
        REQUIRE(arr[i] == square[i]);
    }
}