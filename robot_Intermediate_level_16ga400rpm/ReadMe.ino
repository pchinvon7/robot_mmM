void ReadMe()
  {
    
    fw( 55, 56, 400, "line"); //เดินหาหน้าเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 400
    fw( 55, 56, 400, "non_line"); //เดินหน้าจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 400 (หุ่นยนต์ไม่ถึ่งเส้น)
    bw( 55, 56, 400, "line"); //ถอยหลังเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 400
    bw( 55, 56, 400, "non_line"); //ถอยหลังจนกว่าเวลาหมดความเร็ว 50, 50 เวลาการวิ่ง 400
    tr(90, 230); //เลี้ยวซ้ายความเร็วในการหมุน 90 เวลาในการหมุน 230
    tl(90, 230); //เลี้ยวขวาความเร็วในการหมุน 90 เวลาในการหมุน 230
    set_f(2); //การ set ให้หุ่นยนต์ตรงโดยการเดินหน้าเข้าหาเส้น เลข 2 ในวงเล็บคือ จำนวนการเข้าไปเซต
    set_b(2); //การ set ให้หุ่นยนต์ตรงโดยการถอยหลังเข้าหาเส้น เลข 2 ในวงเล็บคือ จำนวนการเข้าไปเซต
    mission(); //ปล่อยกล่อง

    fw_no_sensor( 55, 56, 250, "line");  //เดินหาหน้าเข้าหาเส้นความเร็ว 50, 50 เวลาการวิ่ง 250   (ไม่เช็คเส้นข้างหน้า  เอาไว้วิ่งขึ้นสะพานกับตะเกรียบ) 
    fw_no_sensor( 55, 56, 250, "non_line");
   
  }
