

namespace HandsOnToDo.Models
{

    public
    class Category
    {

        public int Id {get; set;}

        public string Name {get; set;}

        public String Color {get; set;}

        public int UserId {get; set;}

        public User? Usuario {get; set;}

        public Category()
        {
            this.Id = 0;
            this.Name = "";
            this.Color = "";
        }

        public Category(int id, String name, String color)
        {
            this.Id = id;
            this.Name = name;
            this.Color = color;
        }
    }

}