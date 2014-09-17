package io.realm.examples.realmintroexample.model;

import io.realm.RelationList;
import io.realm.RealmObject;
import io.realm.annotations.RealmClass;

@RealmClass
public class Person extends RealmObject {

    private String name;
    private int age;
    private Dog dog;
    private RelationList<Cat> cats;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public Dog getDog() {
        return dog;
    }

    public void setDog(Dog dog) {
        this.dog = dog;
    }

    public RelationList<Cat> getCats() {
        return cats;
    }

    public void setCats(RelationList<Cat> cats) {
        this.cats = cats;
    }
}