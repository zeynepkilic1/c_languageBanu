
# Github nasıl kullanılır:

Makale okumak ve eğitim videoları izlemek yardımcı olabilir, fakat bir işi gerçekten yapmanın yerini ne tutabilir ki? Bu proje yeni başlayanların veya ilk defa katkıda bulunacakların işini kolaylaştırmak ve onlara rehberlik etmek amacındadır. Unutmayın ki ne kadar rahat olursanız o kadar rahat öğrenirsiniz. Eğer bir GitHub projesine ilk defa katkıda bulunacaksanız, aşağıda gösterilen basit adımları izlemeniz yeterli olacaktır. Söz veriyoruz, eğlenceli olacak.

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/fork.png" alt="fork this repository" />

Eğer bilgisayarınızda git kurulu değil ise, [ yükleyin ]( https://help.github.com/articles/set-up-git/ ).

## Projeyi "çatallama"

Sayfanın sağ üst köşesinde bulunan "Fork" butonuna basıp bu projeyi çatallayın.
Bu işlem sizin hesabınız altında projenin bir kopyasını oluşturacaktır.

## Depoyu (Repository) klonlama

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/clone.png" alt="clone this repository" />

Şimdi bu depoyu bilgisayarınıza klonlayın. GitHub hesabınıza gidin, çatalladığınız depoyu açın, 'clone' butonuna basıp ardından *copy to clipboard* ikonuna basın.

Daha sonra komut istemini açıp aşağıdaki git komutunu çalıştırın:

```
git clone "kopyaladığınız-url"
```
"kopyaladığınız-url" (tırnak işaretleri olmadan) yerine bu deponun GitHub sayfasından aldığınız linki koplayın.

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/copy-to-clipboard.png" alt="copy URL to clipboard" />

Örneğin:
```
git clone https://github.com/kullanıcı-adi/first-contributions.git
```
`kullanıcı-adi` sizin GitHub kullanıcı adınız. Burada GitHub üzerinde bulunan first-contributions reposunun içeriğini bilgisayarınıza kopyalıyorsunuz.

## Dal (Branch) oluşturma

Eğer henüz klasör içinde değilseniz komut isteminde ana klasörünün konumuna gidin:

```
cd first-contributions
```
`git checkout` komutunu kullanarak yeni bir dal(branch) oluşturun:
```
git checkout -b <sizin-yeni-dal-isminiz>
```

Örneğin:
```
git checkout -b ekle-aydin-cagri-dumlu
```
(Dal ismi içinde *ekle* kelimesinin geçme zorunluluğu yok, fakat bu dal isminizi katkı sunanlar listesine ekleme amacıyla oluşturulduğundan, ekle yazmak mantıklı olacaktır.)

## Gerekli değişiklikleri yapıp bu değişiklikleri onaylama

Şimdi, bir metin editöründe `Contributors.md` dosyasını açın. Hafif bir işaretleme dili olan Markdown'a alışkın olmanız gerekmektedir. Nasıl kullanacağınızı öğrenmek için bu [kopya kağıdına](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet) göz atabilirsiniz.

`Contributors.md` dosyasının sonuna bu satırı ekleyin:

```
- [İsminiz](https://github.com/kullanici-adiniz)
```

Örneğin:

```
- [Akif CIFCI](https://github.com/themanoftalent)
```

`](` arasında boşluk olmadığından emin olun. Dosyayı kaydedin ve kapatın.

<img align="right" width="450" src="https://firstcontributions.github.io/assets/Readme/git-status.png" alt="git status" />

Komut istemi üzerinde proje klasörüne gidip `git status` komutunu yazdığınızda yaptığınız değişiklikleri göreceksiniz.

`git add` komutu ile bu değişiklikleri oluşturduğunuz dal içine ekleyin.

```
git add Contributors.md
```

Şimdi `git commit` komutunu kullanarak değişikliklerinizi onaylayın (commit):
```
git commit -m "<isminiz> katkıda bulunanlar listesine eklendi"
```
`<isminiz>` yerine kendi isminizi yazın.

(Ç.N: Açık kaynak dünyasında dünyanın farklı yerlerinden insanlarla birlikte çalışacağınız için onay mesajını İngilizce yazabilirsiniz.)

## Değişiklikleri GitHub üzerine "itme" (Push)

`git push` komutu ile değişikliklerinizi ittirin:
```
git push origin <ekle-sizin-dal-isminiz>
```
`<ekle-sizin-dal-isminiz>` yerine daha önce oluşturduğunuz dalın ismini girin.

## Değişikliklerinizi inceleme için gönderin

Oluşturduğunuz deponun Github sayfasında `Compare & pull request` butonunu göreceksiniz. Bu butona basın.

<img style="float: right;" src="https://firstcontributions.github.io/assets/Readme/compare-and-pull.png" alt="create a pull request" />

Şimdi çekme isteğini (pull request) gönderin.

<img style="float: right;" src="https://firstcontributions.github.io/assets/Readme/submit-pull-request.png" alt="submit pull request" />

Yaptığınız değişiklikleri en kısa zamanda projenin "master" dalı ile birleştireceğiz. Bu işlem tamamlandığı zaman bir bilgilendirme e-postası alacaksınız.

## Bundan sonra ne yapabilirim?

Tebrikler! Artık diğer projelere katkı sunmaya hazırsınız. 



## SOURCE&CREDIT
TO THE OWNER, FORKED. https://github.com/firstcontributions/first-contributions
