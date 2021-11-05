.table
float f1

.code
main:
div $0, 4.0, 2.0
mul $1, 3.0, 1.0
add $2, $0, $1
sub $3, $2, 0.0
mov f1, $3
println f1
scanf f1
println f1
