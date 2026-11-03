const pyramid = (n) => {
  for (let i = 1; i <= n; i++) {
    let str = "";
    for (let j = n - i; j >= 1; j--) {
      str += " ";
    }
    for (let k = 1; k <= 2 * i - 1; k++) {
      str += "*";
    }
    console.log(str);
  }
};
pyramid(5);