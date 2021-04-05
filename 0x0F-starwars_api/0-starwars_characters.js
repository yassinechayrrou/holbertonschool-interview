#!/usr/bin/node

const request = require('request');

const URL = 'https://swapi-api.hbtn.io/api/films/';
const movieID = process.argv[2];
const Req = URL + movieID;

if (!movieID) { process.exit(); }

async function callback (err, res, body) {
  if (err) {
    return console.log(err);
  }
  const characters = JSON.parse(body).characters;
  for (const character of characters) {
    const actor = await new Promise((resolve, reject) => {
      request(character, (err, res, body) => {
        if (err) {
          reject(err);
        } else {
          resolve(JSON.parse(body).name);
        }
      });
    });
    console.log(actor);
  }
}

request(Req, callback);
