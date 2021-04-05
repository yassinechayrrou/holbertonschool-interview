#!/usr/bin/node

const request = require('request');

const URL = 'https://swapi-api.hbtn.io/api/films/';
const movieID = process.argv[2];
const Req = URL + movieID;

function callback (err, res, body) {
  if (err) {
    console.log(err);
    process.exit();
  }
  const movieName = JSON.parse(body).title;
  request(URL, (err, res, body) => {
    if (err) {
      console.log(err);
      process.exit();
    }
    const movieList = JSON.parse(body).results;
    movieList.forEach((movie) => {
      if (movie.title === movieName) {
        const characters = movie.characters;
        characters.forEach((character) => {
          request(character, (err, res, body) => {
            if (err) {
              console.log(err);
              process.exit();
            }
            const character = JSON.parse(body).name;
            console.log(character);
          });
        });
      }
    });
  });
}

request(Req, callback);
