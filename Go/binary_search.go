package Go

/*
 *@author: leno
 *@date: 2022/8/13
 *@description: 二分查找
 */
// search
func search(nums []int64, target int64) int64 {
	left := 0
	right := len(nums) - 1
	for left <= right {
		middleIdx := (right-left)/2 + left
		if nums[middleIdx] == target {
			return int64(middleIdx)
		} else if nums[middleIdx] > target {
			right = middleIdx - 1
		} else {
			left = middleIdx + 1
		}
	}
	return -1
}
