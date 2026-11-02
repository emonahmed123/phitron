const start_pattern = (n) => {
  for (let i = 1; i <= n; i++) {
    let str = "";

    for (let j = 1; j <= i; j++) {
      str += "*";
    }

    console.log(str);
  }
};

start_pattern(5);
