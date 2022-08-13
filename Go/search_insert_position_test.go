package Go

import "testing"

/**
 *@author: leno
 *@date: 2022/8/13
 *@description:
 */

func Test_searchInsert(t *testing.T) {
	type args struct {
		nums   []int
		target int
	}
	tests := []struct {
		name string
		args args
		want int
	}{
		{
			name: "search_insert_position_1",
			args: args{
				nums:   []int{1, 2, 3, 4, 5},
				target: 5,
			},
			want: 4,
		},
		{
			name: "search_insert_position_2",
			args: args{
				nums:   []int{1, 2, 3, 4, 5},
				target: 6,
			},
			want: 5,
		},
		{
			name: "search_insert_position_3",
			args: args{
				nums:   []int{1, 2, 3, 4, 5},
				target: 0,
			},
			want: 0,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := searchInsert(tt.args.nums, tt.args.target); got != tt.want {
				t.Errorf("searchInsert() = %v, want %v", got, tt.want)
			}
		})
	}
}
