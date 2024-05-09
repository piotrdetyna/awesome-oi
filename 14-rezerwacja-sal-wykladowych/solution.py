BEGIN, END = 0, 1

def get_previous_possible_lecture(lectures, max_lecture_end):
    l, r = 0, len(lectures) - 1
    lecture_index = -1 
    
    while l <= r:
        mid = (l + r) // 2
        if lectures[mid][END] <= max_lecture_end:
            lecture_index = mid
            l = mid + 1
        else:
            r = mid - 1
    
    return lecture_index

n = int(input())

lectures = [tuple(map(int, input().split())) for _ in range(n)]
lectures.append((0, 0))
lectures.sort(key=lambda lecture: lecture[END])

times = [0] * len(lectures)
for i, lecture in enumerate(lectures):
    last_best_time = times[i-1]
    
    previous_possible_lecture = get_previous_possible_lecture(lectures, lecture[BEGIN])
    new_time = times[previous_possible_lecture] + lecture[END] - lecture[BEGIN]

    times[i] = max(last_best_time, new_time)
print(max(times))