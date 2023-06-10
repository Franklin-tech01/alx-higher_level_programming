#!/usr/bin/node
const request = require('request');

const apiUrl = process.argv[2];

request(apiUrl, function (error, response, body) {
  if (error) {
    console.error('Error:', error);
    return;
  }

  const todos = JSON.parse(body);

  const completedTasksByUser = {};

  for (const todo of todos) {
    if (todo.completed) {
      const userId = todo.userId;
      if (userId in completedTasksByUser) {
        completedTasksByUser[userId]++;
      } else {
        completedTasksByUser[userId] = 1;
      }
    }
  }

  console.log(completedTasksByUser);
});

