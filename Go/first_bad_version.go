package Go

/**
 *@author: leno
 *@date: 2022/8/13
 *@description: 第一个错误的版本
 */

func isBadVersion(idx int) bool {
	return true
}

// firstBadVersion
// @solution
// 可以想一下 找到了第一个false的idx，那么第一个错误的版本应该是idx+1
// 那么应该是
func firstBadVersion(n int) int {
	left := 1
	right := n
	for left <= right {
		mid := left + (right-left)/2
		if isBadVersion(mid) {
			right = mid - 1
		} else {
			left = mid + 1
		}
	}
	return left
}
