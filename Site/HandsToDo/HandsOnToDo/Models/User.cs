// model view controler, estamos fazendo assim para criar a API
// Essa Model de agora é pra criar as entidades, User, 


// GET pegar um valor e Set para setar um valor
namespace HandsOnToDo.Models
{
// Precisamos instasiar, pois quando um engenheiro se forma, ele ainda tecnicamente ainda n é um engenheiro, precisamos
// Instanciar ele
// Depois disso, precisamos fazer o construtor
    public class User
    {
        public Int32 Id { get; set; }

        public String Name { get; set; }

        public String Email { get; set; }

        public String Password { get; set; }

// New User()
        public User()
        {
            this.Id = 0;        
	        this.Name = ""; 
            this.Email = "";
            this.Password = "";
            //this.Role="User";
        }

        public User(int id, String name, String email, String password)
        {
            this.Id = id;
            this.Name = name;
            this.Email = email;
            this.Password = password;
            //this.Role="User";
        }
    }

}