;;Mikaela-Rose Porter
;; ALGORITHM:
;; 1. Create a list of 32 random integers between 1 and 100.
;; 2. Print the list with a clear label.
;; 3. Reverse the list and print it.
;; 4. Sort the list in ascending order and print it.
;; 5. Find the sum by adding all elements.
;; 6. Calculate the average as sum divided by number of items.
;; 7. Find the largest and smallest values.
;; 8. Print everything with clear labels.


;;RANDOM LIST CREATION
(define (make-random-list n)
  (if (= n 0)
      '()
      (cons (+ 1 (random 100))   ; random number 1–100
            (make-random-list (- n 1)))))


;; Create the list of 32 numbers
(define mylist (make-random-list 32))


;CALCULATIONS
(define my-sum
  (apply + mylist))

(define my-avg
  (/ my-sum (length mylist)))

(define my-largest
  (apply max mylist))

(define my-smallest
  (apply min mylist))

(define my-reversed
  (reverse mylist))

(define my-sorted
  (sort mylist <))


;;OUTPUT
(display "Original List: ") (display mylist) (newline)
(display "Reversed List: ") (display my-reversed) (newline)
(display "Sorted List: ") (display my-sorted) (newline)

(display "Sum: ") (display my-sum) (newline)
(display "Average: ") (display my-avg) (newline)
(display "Largest Number: ") (display my-largest) (newline)
(display "Smallest Number: ") (display my-smallest) (newline)
