import org.w3c.dom.*;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;

public class Faturamento {
    public static void main(String[] args) {
        String arquivo = "faturamento.xml";
        try {
            DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
            DocumentBuilder builder = factory.newDocumentBuilder();
            Document doc = builder.parse(arquivo);

            NodeList dias = doc.getElementsByTagName("dia");
            double menor = Double.MAX_VALUE;
            double maior = Double.MIN_VALUE;
            double soma = 0;
            int diasComFaturamento = 0;
            int diasAcimaMedia = 0;

            for (int i = 0; i < dias.getLength(); i++) {
                Element dia = (Element) dias.item(i);
                double valor = Double.parseDouble(dia.getAttribute("valor"));
                if (valor > 0) { 
                    if (valor < menor) menor = valor;
                    if (valor > maior) maior = valor;
                    soma += valor;
                    diasComFaturamento++;
                }
            }

            double media = diasComFaturamento > 0 ? soma / diasComFaturamento : 0;

            for (int i = 0; i < dias.getLength(); i++) {
                Element dia = (Element) dias.item(i);
                double valor = Double.parseDouble(dia.getAttribute("valor"));
                if (valor > media) diasAcimaMedia++;
            }

            System.out.printf("Menor faturamento: %.2f\n", menor);
            System.out.printf("Maior faturamento: %.2f\n", maior);
            System.out.printf("Dias com faturamento acima da media: %d\n", diasAcimaMedia);

        } catch (Exception e) {
            System.out.println("Erro ao processar o arquivo XML: " + e.getMessage());
        }
    }
}
