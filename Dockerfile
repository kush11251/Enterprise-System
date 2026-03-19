FROM gcc:latest
WORKDIR /app
COPY . /app
RUN gcc -o main src/main.c src/controllers/UserController.c src/services/UserService.c src/models/User.c src/utils/HashUtils.c
CMD ["./main"]