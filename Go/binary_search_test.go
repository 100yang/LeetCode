package Go

import "testing"

/**
 *@author: leno
 *@date: 2022/8/13
 *@description: 二分搜索测试用例
 */

func Test_search(t *testing.T) {
	type args struct {
		nums   []int64
		target int64
	}
	tests := []struct {
		name string
		args args
		want int64
	}{
		{
			name: "binary_search_data_1",
			args: args{
				nums:   []int64{1, 2, 3, 4, 5, 6},
				target: 9,
			},
			want: -1,
		},
		{
			name: "binary_search_data_2",
			args: args{
				nums:   []int64{1, 2, 3, 4, 5, 6},
				target: 3,
			},
			want: 2,
		},
		{
			name: "binary_search_data_3",
			args: args{
				nums:   []int64{1, 2, 3, 4, 5, 6},
				target: 1,
			},
			want: 0,
		},
		{
			name: "binary_search_data_4",
			args: args{
				nums:   []int64{1, 2, 3, 4, 5, 6},
				target: 6,
			},
			want: 5,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := search(tt.args.nums, tt.args.target); got != tt.want {
				t.Errorf("search() = %v, want %v", got, tt.want)
			}
		})
	}
}
