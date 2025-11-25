use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n).unwrap();
    let n : usize = input_n.trim().parse().expect("hola");

    let mut string_arr = String::new();
    io::stdin().read_line(&mut string_arr).unwrap();

    let mut arr: Vec<i64> = string_arr.split_whitespace().map(|x| x.parse::<i64>().unwrap()).collect();
    
    for i in 0..n {
      if arr[i] == 1 {
        arr[i] = 2;
      }
    }

    for i in 1..n {
      if arr[i] < arr[i-1] {
        continue;
      }
      if arr[i] % arr[i-1] == 0 {
        arr[i] += 1;
      }
    }
    t -= 1;
    for i in 0..n {
      print!("{} ", arr[i]);
    }
    println!();
  }
}