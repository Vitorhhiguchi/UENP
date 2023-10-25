

namespace HandsOnToDo.Models
{

    public class ToDo
    {
        
        public int Id {get; set;}

        public String Task {get; set;}

        public bool IsCompleted {get; set;} = false;

        public DateTime CreatedAt {get; set;} = DateTime.Now;
        
        public User? Usuario {get; set;}

        public int CategoryId {get; set;}

        public Category? Categoria {get; set;}

        public ToDo()
        {
            this.Id = 0;
            this.Task = "";
        }

        // public ToDo(string task, Category? category)
        // {
        //     this.Task = task;
        //     this.Category = category;
        // }

        // public ToDo(int id, string task, bool isCompleted, DateTime createdAt)
        // {
        //     this.Id = id;
        //     this.Task = task;
        //     this.IsCompleted = isCompleted;
        //     this.CreatedAt = createdAt;
        // }

    }

}