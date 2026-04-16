use std::io;

fn main() {
    let students = get_positive_integer();

    let mut youngest: (u32, String) = (201130, "undefined".to_string());
    let mut oldest: (u32, String) = (0, "undefined".to_string());

    for _student in 0..students {
        let mut student_info = String::new();
        io::stdin().read_line(&mut student_info).expect("Failed to read the student information");
        let student_info: Vec<&str> = student_info.split_whitespace().collect();
        
        // 1990.01.01 ~ 2010.12.31
        let birth_date : (u32, u32, u32) = (student_info[1].parse().unwrap(), student_info[2].parse().unwrap(), student_info[3].parse().unwrap());

        // 0 ~ 201130
        let student_info : (u32, String) = (calculate_age(birth_date), student_info[0].to_string());

        if student_info.0 >= oldest.0 {
            oldest.0 = student_info.0;
            oldest.1 = student_info.1.clone();
        }

        if student_info.0 < youngest.0 {
            youngest.0 = student_info.0;
            youngest.1 = student_info.1.clone();
        }
    }
    
    println!("{}", youngest.1);
    println!("{}", oldest.1);
}

fn get_positive_integer() -> u8 {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to get integer");
    input.trim().parse().unwrap()
}

fn calculate_age(birth_date : (u32, u32, u32)) -> u32 {
    let age = (2010 - birth_date.2) * 10000 + (12 - birth_date.1) * 100 + (31 - birth_date.0);

    age
}