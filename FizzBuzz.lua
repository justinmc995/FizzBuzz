-- Do FizzBuzz
i = 1
while (i <= 100) do
	if (math.fmod(i,15) == 0) then
		print("FizzBuzz")
	elseif (math.fmod(i,3) == 0) then
		print("Fizz")
	elseif (math.fmod(i,5) == 0) then
		print("Buzz")
	else
		print(i)
	end
	i = i + 1
end