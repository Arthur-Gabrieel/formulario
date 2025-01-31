let slideIndex = 0;

function moveSlide(direction) {
  const slides = document.querySelectorAll('.slide');
  const totalSlides = slides.length;

  slideIndex += direction;
  if (slideIndex < 0) {
    slideIndex = totalSlides - 1;
  } else if (slideIndex >= totalSlides) {
    slideIndex = 0;
  }

  const slidesContainer = document.querySelector('.slides');
  slidesContainer.style.transform = `translateX(-${slideIndex * 100}%)`;
}

// Função para iniciar o carrossel automático
function autoMoveSlide() {
  moveSlide(1);  // Move para o próximo slide
}

// Configura o intervalo de mudança automática (a cada 3 segundos)
setInterval(autoMoveSlide, 3000);  //

//Barra de Pesquisa

// script.js

function searchFunction() {
  var input = document.getElementById('searchInput').value.toLowerCase(); // Pega o valor do campo de pesquisa
  var resultsDiv = document.getElementById('searchResults');
  
  // Lista de exemplos de dados (pode ser substituída por dados reais ou uma API)
  var data = [
      "Moto",
      "Carro",
      
  ];

  // Filtra os resultados
  var results = data.filter(function(item) {
      return item.toLowerCase().includes(input); // Verifica se o texto digitado está presente
  });

  // Exibe os resultados ou uma mensagem de erro
  if (results.length > 0) {
      resultsDiv.innerHTML = '<ul>' + results.map(function(item) {
          return '<li>' + item + '</li>';
      }).join('') + '</ul>';
  } else {
      resultsDiv.innerHTML = 'Nenhum resultado encontrado.';
  }
}
