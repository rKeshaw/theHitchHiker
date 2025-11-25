use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    // let mut input_n = String::new();
    // io::stdin().read_line(&mut input_n);
    // let mut n : i32 = input_n.parse().expect("hola");

    let mut string_arr = String::new();
    io::stdin().read_line(&mut string_arr).expect("voila");

    let mut arr: Vec<i64> = string_arr.split_whitespace().map(|x| x.parse::<i64>().unwrap()).collect();
    
    let k = arr[1];
    let mut sum_min = 0;
    let mut sum_max = 0;
    let n = arr[0];
    
    sum_min = k * (k + 1) / 2;
    sum_max = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
    // for i in 1..=k {
    //   sum_min += i;
    //   sum_max += arr[0] - i + 1;
    // }

    let x = arr[2];
    if x >= sum_min && x <= sum_max {
      println!("yES");
    } else {
      println!("nO")
    }

    t -= 1;
  }
}