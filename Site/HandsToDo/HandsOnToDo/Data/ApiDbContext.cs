using Microsoft.EntityFrameworkCore;
using HandsOnToDo.Models;
using Microsoft.EntityFrameworkCore;


namespace HandsOnToDo.Data
{

    public class ApiDbContext : DbContext
    {
        
        // Jogador<Sao_Paulo>
        public ApiDbContext(DbContextOptions<ApiDbContext> options) : base(options)
        {
        }

        public DbSet<Category> Categories {get; set;}

        public DbSet<ToDo> ToDos {get; set;}

        public DbSet<User> Users {get; set;}

    }

}
