use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n);
    let n : usize = input_n.trim().parse().expect("hola");

    let mut string_arr = String::new();
    io::stdin().read_line(&mut string_arr).expect("voila");

    let mut arr: Vec<char> = string_arr.trim().chars().collect();

    let mut front: usize = 0;
    let mut back: usize = n - 1;
    while front < back && arr[front] != arr[back] {
      front += 1;
      back -= 1;
    }

    if front > back {
      println!("{}", 0);
    } else {
      println!("{}", back - front + 1);
    }
    // if front == back {
    //   println!("{}", 1)
    // } else {
    //   if front - back == 1 {println!("{}", 0)}
    //   else {println!("{}", back - front + 1)}
    // }

    t -= 1;
  }
}