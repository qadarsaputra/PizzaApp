package com.example.projectbp2690

import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageView

class AboutActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_about)

        val imgCall:ImageView = findViewById(R.id.imageviewcall)

        imgCall.setOnClickListener {
            val callIntent:Intent = Uri.parse("tel:085155163678").let {
               val number > Intent(Intent.ACTION_DIAL,number)
            }
        }
    }
}