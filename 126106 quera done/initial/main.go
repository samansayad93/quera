package main

import (
	"fmt"
	"strconv"
)

func HelloCodeCup(n int) string {
	return "Hello CodeCup " + strconv.Itoa(n)
}

func main() {
	var n int
	fmt.Scanln(&n)
	str := HelloCodeCup(n)
	fmt.Println(str)
}
