#include "Header.h"


/**<*------------------------------------------------------------------------------------*/
/**<*                           Procédures d'implémentation du TP                        */
/**<*-------------------------------------- ---------------------------------------------*/
void ScanMatFR(tab2d t,int *l,int *c)//Lire un tableau 2D
{
    int i,j;
    WHITE();
    printf("\nDonner le nombre de ligne de votre Matrice : ");
    scanf("%d",l);
    printf("\nDonner le nombre de colonne de votre Matrice : ");
    scanf("%d",c);
    for(i=0;i<*l;i++)
        for(j=0;j<*c;j++)
    {
        printf("\nT[ %d , %d ]=",i,j);
        scanf("%f",&t[i][j]);
    }
}
//------------------------------------------------------------------------
void ScanMatEN(tab2d t,int *l,int *c)//Lire un tableau 2D
{
    int i,j;
    WHITE();
    printf("\nGive the number of lines of your matrix : ");
    scanf("%d",l);
    printf("\nGive the number of columns of your matrix : ");
    scanf("%d",c);
    for(i=0;i<*l;i++)
        for(j=0;j<*c;j++)
    {
        printf("\nT[ %d , %d ]=",i,j);
        scanf("%f",&t[i][j]);
    }
}
/**<*----------------------------------------------------------------------------*/
/**<*              Les procédures de manipulation de matrice creuse              */
/**<*------------------------------------- --------------------------------------*/
void TransMat(tab2d t,int l ,int c,Matrice T)
{
    int i,j,cpt;
    Maillon *p,*dernier,*tete;
    liste lis;

    for(i=0;i<l;i++)//--- on parcourt les lignes de la matrice ---
    {
        cpt=0;
        tete=NULL;
        for(j=0;j<c;j++)//--- on parcourt les collones de la matrice ---
        {
            if (t[i][j]!=0)//--- si le contenu de la cellule n'est nul---
            {
                cpt++;
                if (cpt==1)//--- pourinitialiser la tete de la liste ---
                {
                    p=Allouer();
                    Aff_Val(p,t[i][j]);
                    Aff_col(p,j);
                    tete=p;
                    dernier=p;
                }
                else
                {
                    p=Allouer();
                    Aff_Val(p,t[i][j]);
                    Aff_col(p,j);
                    Aff_Adr(dernier,p);
                    dernier=p;
                }

            }
        }
        if (cpt>0)//--- si la ligne cntient au moins un elelment non nul---
        {
            Aff_Adr(dernier,NULL);
        }
        lis.tete=tete;
        lis.taille=cpt;
        T[i]=lis;
    }
}
//--------------------------------------------------------------------------------------------------
void AffichMatFR(Matrice T,int l,int c)//Afficher la matrice  partit de la structure des LLC
{
    int i,j;
    Maillon *p;
    JAUNE();printf("\nVoici votre matrice : \n\n");WHITE();
    for(i=0;i<l;i++)
    {

        j=0;
        p=T[i].tete;
        if(p!=NULL)//il y'a au moin un element non nul dans cette ligne
        {

            do
            {
                if (Colone(p)!=j)//l'element de cette colone n'existe pas
                {
                    printf("%10.2d",0);
                }
                else//l'element de cette colone existe
                {
                    printf("%10.2f",Valeur(p));
                    p=Suivant(p);
                }
                j++;
            }while(p!=NULL);//if p=Null la ==> fin de la ligne
            while(j<c)//pour completer la ligne
            {
                printf("%10d",0);
                j++;
            }
            putchar('\n');putchar('\n');
        }
        else//la ligne est vide
        {
            for(j=0;j<c;j++)
            {
                printf("%10d",0);
            }
            putchar('\n');putchar('\n');
        }
    }
    putchar('\n');

}
//--------------------------------------------------------------------------------------------------
void AffichMatEN(Matrice T,int l,int c)
{
    int i,j;
    Maillon *p;
    JAUNE();printf("\nThere is your matrix : \n\n");WHITE();
    for(i=0;i<l;i++)
    {

        j=0;
        p=T[i].tete;
        if(p!=NULL)
        {

            do
            {
                if (Colone(p)!=j)
                {
                    printf("%10.2d",0);
                }
                else
                {
                    printf("%10.2f",Valeur(p));
                    p=Suivant(p);
                }
                j++;
            }while(p!=NULL);
            while(j<c)
            {
                printf("%10d",0);
                j++;
            }
            putchar('\n');putchar('\n');
        }
        else
        {
            for(j=0;j<c;j++)
            {
                printf("%10d",0);
            }
            putchar('\n');putchar('\n');
        }
    }
    putchar('\n');

}

//--------------------------------------------------------------------------------------------------------
//------ multiplication d'une matrice creuse par un scalaire ----
void prodScal(Matrice t,int l,float scal,Matrice a)
{
    int i,j;
    Maillon *p,*q,*dernier,*tete ;
    for(i=0;i<l;i++)//---on parcourt la liste -----
    {
        tete=NULL;
        if((t[i].taille)!=0)//---si la ligne contient au moins un element -----
        {
            p=t[i].tete;j=0;//--- on initialise p a la tete de la liste ----
            while(p!=NULL) //---si on n'est pas arriver a la fin de la liste ---
            {
                    if(j==0) //--pour intialiser la tete de la liste --
                    {
                        q=Allouer();
                        Aff_Val(q,Valeur(p)*scal);
                        Aff_col(q,Colone(p));
                        tete=q;
                        dernier=tete;
                        p=Suivant(p);
                    }
                    else
                    {
                        q=Allouer();
                        Aff_Val(q,Valeur(p)*scal);
                        Aff_col(q,Colone(p));
                        Aff_Adr(dernier,q);
                        dernier=q;
                        p=Suivant(p);
                    }
                    j++;
            }
            Aff_Adr(dernier,NULL);
        }
            a[i].taille=t[i].taille;
            a[i].tete=tete;
    }
}
//-------determine la valeur d'une cellule de la matrice creuse-----------------
int val_mat(Matrice t,int l,int c)
{
    int i=0,r=0;Maillon* p;

    if(t[l].taille!=0)//--- si la ligne qui contient cette cellule contient au moins un element non nul---
    {
        p=t[l].tete;
        for(i=0;i<t[l].taille;i++)//--- on parcour la ligne contenat cette  cellule--
        {
            if(p->col==c)r=p->val;//---si le numero de colonne de ce maillom corespond a la collone de le cellule --
            else p=Suivant(p);//---si la condition pércedente n'est pas verifier on passe a la colone suivant--
        }
    }
    return(r);
}
//------------la somme de deux matrices creuses -------------------------------------------------------------------------
void SomMat(Matrice n,Matrice m,int l,int c,Matrice t)
{
    int i,j,cpt;
    Maillon *p,*tete,*dernier;
    for(i=0;i<l;i++)//--on parcourt les lignes des deux listes car ils ont le meme nombre de ligne---
    {
        cpt=0;tete=NULL;
        if((n[i].taille!=0)||(m[i].taille!=0))  //--au moins la ligne de l'une des matrices n'est pas nulle--
        {
            for(j=0;j<c;j++)//---on parcourt les colonnes des deux listes ---
            {
                if(val_mat(n,i,j)+val_mat(m,i,j)!=0) //--pour vérifier que la somme n'est pas nulle (car les deux nombres peuvent etre opposé)--
                {
                    cpt++;
                    if(cpt==1) //--pour intialiser la tete de la liste --
                    {
                        p=Allouer();
                        Aff_Val(p,val_mat(n,i,j)+val_mat(m,i,j));
                        Aff_col(p,j);
                        tete=p;
                        dernier=p;
                    }
                    else
                    {
                        p=Allouer();
                        Aff_Val(p,val_mat(n,i,j)+val_mat(m,i,j));
                        Aff_col(p,j);
                        Aff_Adr(dernier,p);
                        dernier=p;
                    }
                    Aff_Adr(dernier,NULL);
                }
            }
        }
      t[i].tete=tete;
      t[i].taille=cpt;
    }
}
//------------------------------------------------------------------------------------------------------------------------
int max_col(Matrice t,int l,int c)
{
    int cpt=0,i,j;Maillon* p;
    for(i=0;i<l;i++)
    {
        p=t[i].tete;
        for(j=0;j<(t[i].taille);j++)
        {
            if(p->col>cpt)cpt=p->col;
            p=Suivant(p);
        }
    }
    return(cpt);
}


//-----------le produit de deux matrices -----------------------------------------------------------------------------------
void prodMat(Matrice a,Matrice b,Matrice d,int l,int c,int n)
{
    int i,j,k,res,cpt;
    Maillon *p,*tete,*dernier;

    for(i=0;i<l;i++)//---on parcourt les lignes de la premiére matrice ---
    {
        cpt=0;tete=NULL;
        if(a[i].taille!=0)//--si toute la ligne est nulle alors le contenu de la celleule sera nul--
        {
            for(j=0;j<n;j++)//---on parcourt les collones de la deuxiéme matrice ---
            {
                res=0;
                for(k=0;k<c;k++)//---on parcourt les lignes de la deuxiéme matrice ---
                {
                    res+=val_mat(a,i,k)*val_mat(b,k,j);//---on sauvgerde le cumule des sommes deans res ---
                }
                if(res!=0)//--- si la somme n'est pas nulle ---
                {
                    cpt++;//--- on initialise le compteur ---
                    if(cpt==1)
                    {
                        p=Allouer();
                        Aff_Val(p,res);
                        Aff_col(p,j);
                        tete=p;
                        dernier=p;
                    }
                    else
                    {
                        p=Allouer();
                        Aff_Val(p,res);
                        Aff_col(p,j);
                        Aff_Adr(dernier,p);
                        dernier=p;
                    }
                    Aff_Adr(dernier,NULL);
                }

            }
        }
        d[i].taille=cpt;
        d[i].tete=tete;
    }

}
//-------------efface une ligne et une colonne corespondant a une cellule------------
void EffColLig(Matrice t,int l,int c,Matrice o,int* n,int* m,int a,int b)
{
    int i=0,cpt;
    Maillon *tete,*dernier,*p,*q;

    for(i=0;i<l;i++)//--- on parcourt les lignes de la liste ---
    {
        if(i!=a)//--- si la ligne ne corespond pas a la ligne qu'on veut effacé  ---
        {
            cpt=0;//--- on initialise le compteur ---
            tete=NULL;
            p=t[i].tete;
            while(p!=NULL)//--- on parcourt la ligne ---
            {
                if((p->col)!=b)//--- si le umero de colonne du maillon ne coresond pas a la colonne qu'on veut effacé ---
                {
                    cpt++;//--- on incrémente le compeur ---
                    if(cpt==1)
                    {
                        q=Allouer();
						Aff_Val(q,Valeur(p));
                        if((p->col)<b)Aff_col(q,p->col) ;
                        else Aff_col(q,(p->col)-1);
                        tete=q;
						dernier=q;
                    }
                    else
                    {
                        q=Allouer();
                        Aff_Val(q,Valeur(p));
                        if((p->col)<b)Aff_col(q,p->col);
                        else Aff_col(q,(p->col)-1);
                        Aff_Adr(dernier,q);
                        dernier=q;
                    }
                  Aff_Adr(dernier,NULL);
                }
                p=Suivant(p);
            }
            if(i<a)//--- si le numéro de ligne de cete matrice est inferieure a celle qu'on veut effacer ---
            {
                o[i].taille=cpt;
                o[i].tete=tete;
            }
            if(i>a)//--- si le numéro de ligne de cete matrice est supérieur a celle qu'on veut effacer ---
            {
                o[i-1].taille=cpt;
                o[i-1].tete=tete;
            }
        }
    }

    *n=l-1;//--- on décremente le nombre de ligne de la matrice---
    *m=c-1;//--- on decremente le nombre de clonne de la matrice---
}
//-------------calcul le determinant d'une matrice creuse-----------------------------------------------------
float DetMat(Matrice t,int l,int c)
{
    int i,n,m,s=1;
    Matrice p;
    float a,r;

    //AffichMat(t,l,c);
    if((l==1)&&(c==1))//---si la matrice ne contient qu'une seule cellule ---
    {
        r=val_mat(t,0,0);
    }
    else if((l==2)&&(c==2))//--- si la mtrice estt caré 2*2 ---
        {
            r=val_mat(t,0,0)*val_mat(t,1,1)-val_mat(t,0,1)*val_mat(t,1,0);
        }
        else
        {
            for(i=0;i<c;i++)//--- on parcourt les collones de la matrice---
            {
                EffColLig(t,l,c,p,&n,&m,0,i);//--- on efface a chaque iteration la collone est la ligne de la cellule [0,i]---
                a=DetMat(p,n,m);//---on calcule le determinant de la matrice resultante ---
                r+=s*val_mat(t,0,i)*a;
                s=-s;//---on fait l'alternance du signe ---
            }
        }

    //printf("****%f*****",r);
    return r;
}
//-----------------------------calcul la co_matrice------------------------------
void coMat(Matrice t,int l,int c,Matrice p)
{
    int i,j,n,m,cpt=0;
    Matrice o;
    Maillon *tete,*dernier,*q;
    float a,s,r=1,d;

    for(i=0;i<l;i++)//--- on parcourt les lignes de la marice ---
    {
        s=r;
        tete=NULL;
        cpt=0;//---on initialise le compteur ---
        for(j=0;j<c;j++)//--- on parcourt les colonnes de la matrice ---
        {
            EffColLig(t,l,c,o,&n,&m,i,j);//--- a chaque iteration on effface la colonne et la ligne de la cellule [i,j]---
            d=DetMat(o,n,m);//---on calcule le determinant de la matrice resulatante---
            a=s*d;
            s=-s;//---on fait l'alternance du signe ---
            if(a!=0)//---si le determinant n'est pas nul ---
            {
                cpt++;//---on incremente le compteur---
                if(cpt==1)//---on initialise la tete ---
                {
                    q=Allouer();
                    Aff_Val(q,a);
                    Aff_col(q,j);
                    tete=q;
                    dernier=q;
                }
                else
                {
                    q=Allouer();
                    Aff_Val(q,a);
                    Aff_col(q,j);
                    Aff_Adr(dernier,q);
                    dernier=q;
                }
                Aff_Adr(dernier,NULL);
            }
        }
        r=-r;//---on fait l'alternance du signe entre 2 ligne succesive ---
        p[i].taille=cpt;
        p[i].tete=tete;
    }
}
//-----------calcule la transposé d'une matrice-------------
void transpoMat(Matrice t,int l,int c,Matrice o)
{
    int i,j,cpt=0;
    Maillon *tete,*q,*dernier,*p;

    for(i=0;i<c;i++)
    {
        cpt=0;//--- on initialise le compteur ---
        tete=NULL;
        for(j=0;j<l;j++)//--- on parcourt les lignes e la matrice ---
        {
            if(t[j].taille!=0)//--- si la ligne contient au moins un element non nul ---
            {
                p=t[j].tete;
                while(p!=NULL)//--- on parcourt la ligne ---
                {
                    if((p->col)==i)//--- si le numéro de la colonne corespond au numéro de la ligne ---
                    {
                      cpt++;//--- on incremente le compteur ---
                      if(cpt==1)//--- pour initilise la tete ---
                      {
                        q=Allouer();
                        Aff_Val(q,Valeur(p));
                        Aff_col(q,j);
                        tete=q;
                        dernier=q;
                      }
                      else
                      {
                        q=Allouer();
                        Aff_Val(q,Valeur(p));
                        Aff_col(q,j);
                        Aff_Adr(dernier,q);
                        dernier=q;
                      }
                       Aff_Adr(dernier,NULL);
                    }
                    p=Suivant(p);
                }
            }
        }
        o[i].taille=cpt;
        o[i].tete=tete;
    }
}
//---------calcule l'inverse d'une matrice ------------------------
void invMat(Matrice t,int l,int c,Matrice p)
{
    Matrice o,n;
    float d;

    coMat(t,l,c,o);//--- on calcule la co matrice de la matrice T---
    transpoMat(o,l,c,n);//---on transpose la matrice resultante ---
    d=DetMat(t,l,c);//---on calcule le determinant de la mtrice T ---
    prodScal(n,l,1/d,p);//--on multiplie la matrice transposé *1/determinant de T---
}
//--------on transforme la matrice représenté par un tableau de liste en une matrice de colone et de lignes---
void TransTab(Matrice t,tab2d m,int l,int c)
{
    int i,j;Maillon *p;
    for(i=0;i<l;i++)//----on remplit la matrice par des 0---
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=0;
        }
    }
    for(i=0;i<l;i++)//--on parcourt le tableau de liste---
    {
        if((t[i].taille)!=0)//--- si la ligne contient au moins un element non nul---
        {
            p=t[i].tete;
            while(p!=NULL)//---on parcourt la liste---
            {
             m[i][p->col] =p->val;
             p=Suivant(p);//---on passe au maillon suivant---
            }
        }
    }
}
//---------------------------------------------------------------------------------------------
//---------calcule les solutions d'un systém d'équations donnée--------------------------------
void solEqua(Matrice t,Matrice p,int l,int c,Matrice o)
{
    Matrice k;

    invMat(t,l,c,k);//--- on inverse la matrice ---
    prodMat(k,p,o,l,c,1);
}
//----------------------------------------------------------------------------------------------
