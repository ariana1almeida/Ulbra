package org.example;

import java.util.ArrayList;
import java.util.List;

public class Teste {

    public static void main(String[] args) {
        List<String> commonWords=new ArrayList<String>();
        List<String> passwords=new ArrayList<String>();

        passwords
                .stream()
                .forEach(password->{

                    commonWords
                            .stream()
                            .filter(
                                    commonWord ->
                                            password.contains(commonWord))
                            .collect(Collectors.toList());

                    if(common_words.contains(password)){
                        passwordStrength.Add("weak");
                    }

                });
    }
}
