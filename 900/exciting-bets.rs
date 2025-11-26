use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    let mut string_arr = String::new();
    io::stdin().read_line(&mut string_arr).unwrap();

    let arr: Vec<i64> = string_arr.split_whitespace().map(|x| x.parse::<i64>().unwrap()).collect();

    t -= 1;

    if arr[0] == arr[1] {
      println!("{} {}", 0, 0);
    } else {
      let mini = (arr[0]).min(arr[1]);
      let diff = (arr[0] - arr[1]).abs();
      let lower = (mini / diff) * diff;
      let higher = ((mini / diff) + 1) * diff;
      let moves = ((lower - mini).abs()).min((higher - mini).abs());

      println!("{} {}", diff, moves);
    }
  }
}