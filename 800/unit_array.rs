use std::io;

fn main() {
  let mut input_t = String::new();
  io::stdin().read_line(&mut input_t);
  let mut t : i32 = input_t.trim().parse().expect("la");

  while t > 0 {
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n);
    let n : i32 = input_n.trim().parse().expect("hola");

    let mut chain = String::new();
    io::stdin().read_line(&mut chain).expect("voila");

    let mut negative = chain.chars().filter(|&c| c == '-').count() as i32;
    let mut positive = n - negative;

    let mut min_ops = 0;
    if negative % 2 == 1 {
      min_ops += 1;
      negative -= 1;
      positive += 1;
    }
    if negative > positive {
      let gap = negative - positive;
      min_ops += 2 * ((gap + 3) / 4);
    }
    t -= 1;
    println!("{}", min_ops);
  }
}