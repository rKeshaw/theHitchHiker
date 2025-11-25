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

    let mut arr: Vec<i32> = string_arr.split_whitespace().map(|x| x.parse::<i32>().unwrap()).collect();
    
    if arr[0] == arr[n-1] {
      println!("NO");
    } else {
      println!("YES");
      print!("{}", arr[n-1]);
      for i in 0..n-1 {
        print!(" {}", arr[i]);
      }
      println!();
    }
    t -= 1;
  }
}

