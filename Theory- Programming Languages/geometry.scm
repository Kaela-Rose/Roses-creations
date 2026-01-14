;; Mikaela-Rose Porter

;; Algorithm:
;; 1. Define a function to compute the area and perimeter of a circle.
;;    - Use a given radius.
;;    - Area = π * r^2
;;    - Circumference = 2 * π * r
;; 2. Define a function to compute the area and perimeter of a rectangle.
;;    - Use a given length and width.
;;    - Area = length * width
;;    - Perimeter = 2*(length + width)
;; 3. Define a function to compute the area and perimeter of a right triangle.
;;    - Use the two legs.
;;    - Area = 1/2 * leg1 * leg2
;;    - Hypotenuse = sqrt(leg1^2 + leg2^2)
;;    - Perimeter = leg1 + leg2 + hypotenuse
;; 4. Define a function for a regular pentagon (or hexagon). Here we choose hexagon.
;;    - Use a given side length.
;;    - Area = (3*sqrt(3)/2) * s^2
;;    - Perimeter = 6 * s
;; 5. Call each function with sample values.
;; 6. Print labeled output for each geometric shape.

(define pi 3.14159)

;; Circle
(define (circle radius)
  (let ((area (* pi radius radius))
        (circumference (* 2 pi radius)))
    (display "Circle:\n")
    (display (string-append "  Area: " (number->string area) "\n"))
    (display (string-append "  Circumference: " (number->string circumference) "\n\n"))))

;; Rectangle
(define (rectangle length width)
  (let ((area (* length width))
        (perimeter (* 2 (+ length width))))
    (display "Rectangle:\n")
    (display (string-append "  Area: " (number->string area) "\n"))
    (display (string-append "  Perimeter: " (number->string perimeter) "\n\n"))))

;; Right Triangle
(define (right-triangle leg1 leg2)
  (let* ((area (* 0.5 leg1 leg2))
         (hypotenuse (sqrt (+ (* leg1 leg1) (* leg2 leg2))))
         (perimeter (+ leg1 leg2 hypotenuse)))
    (display "Right Triangle:\n")
    (display (string-append "  Area: " (number->string area) "\n"))
    (display (string-append "  Perimeter: " (number->string perimeter) "\n\n"))))

;; Regular Hexagon
(define (hexagon side)
  (let ((area (* (/ (* 3 (sqrt 3)) 2) (* side side)))
        (perimeter (* 6 side)))
    (display "Hexagon:\n")
    (display (string-append "  Area: " (number->string area) "\n"))
    (display (string-append "  Perimeter: " (number->string perimeter) "\n\n"))))

;; Function Calls

(circle 5)
(rectangle 4 7)
(right-triangle 3 4)
(hexagon 6)
