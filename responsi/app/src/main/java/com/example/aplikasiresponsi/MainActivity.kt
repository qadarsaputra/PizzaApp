package com.example.aplikasiresponsi

import android.annotation.SuppressLint
import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView

class MainActivity : AppCompatActivity() {
    @SuppressLint("MissingInflatedId")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val imgCall: TextView = findViewById(R.id.textviewcall1)
        val rvBuku: RecyclerView = findViewById(R.id.recyclerview)


        rvBuku.layoutManager = LinearLayoutManager(this)
        val data = ArrayList<PerpueModel>()

        data.add(PerpueModel(R.drawable.book1, "Emi's Beach Adventure",
            "Ini adalah buku yang Berjudul Emi'S Beach adventure"))

        data.add(PerpueModel(R.drawable.book2, "Ade's Adventure",
            "Ini adalah buku yang Berjudul Emi'S Beach adventure"))

        data.add(PerpueModel(R.drawable.book4, "Mermaid To Rescue",
            "Ini adalah buku yang Berjudul Emi'S Beach adventure"))



        imgCall.setOnClickListener {
            val callIntent: Intent = Uri.parse("tel : 085155163678").let {
                    number-> Intent(Intent.ACTION_DIAL, number)
            }
            startActivity(callIntent)
        }
    }
}