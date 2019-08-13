(1),Some case must be considered:
	1, l1 = [5] l2=[5], expected: result = [0,1]
    2, l1 = [1,8] l2=[0], expected: result = [1,8]
    So the conditions for while loop should be well considered.
(2)ListNode **node = &result, result is the head address for the result list.
node = &((*node)->next), locate current listnode to next.
