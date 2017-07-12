package kotlindemo.test.com.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import kotlindemo.test.com.myapplication.model.Bank;
import kotlindemo.test.com.myapplication.model.Employee;
import kotlindemo.test.com.myapplication.model.Student;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Bank bank = bankDetailsFromJNI();
        System.out.println( "Bank Details : ==>> " + bank.toString() );

        Employee employee = employeerDetailsFromJNI();
        System.out.println( "Employee Details ==>> " + employee.toString() );

        Student student = studentDetailsFromJNI();
        System.out.println( "Student Details ==>> " + student.getName() );

    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native Bank bankDetailsFromJNI();
    public native Employee employeerDetailsFromJNI();
    public native Student studentDetailsFromJNI();

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
}
