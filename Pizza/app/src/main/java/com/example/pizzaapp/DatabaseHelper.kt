package com.example.pizzaapp

import android.content.Context
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DatabaseHelper(context: Context, DATABASE_NAME: String?, DATABASE: Int, DATABASE_VERSION: Int): SQLiteOpenHelper(
    context,DATABASE_NAME, null,DATABASE_VERSION
){
    companion object {
    private val DATABASE_NAME = "pizza"
    private val DATABASE_VERSION = 1
    private val TABLE_ACCOUNT = "account"
    private val COLUMN_EMAIL = "email"
    private val COLUMN_NAME = "name"
    private val COLUMN_LEVEL = "level"
    private val COLUMN_PASSWORD = "password"
    }

    private val CREATE_ACCOUNT_TABLE =

    override fun onCreate(p0: SQLiteDatabase?) {
        TODO("Not yet implemented")
    }

    override fun onUpgrade(p0: SQLiteDatabase?, p1: Int, p2: Int) {
        TODO("Not yet implemented")
    }
}