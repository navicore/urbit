/* include/f/arvo.h
**
** This file is in the public domain.
*/
  /**   Data structures.
  **/
    /* u3_cart: ovum carton.
    */
      struct _u3_cs_arvo;

      typedef struct _u3_cs_cart {
        u3_noun                 vir;      //  effects of ovum
        u3_bean                 did;      //  cart considered for commit?
        u3_bean                 cit;      //  cart committed?
        c3_d                    ent_d;    //  entry in raft queue?
        u3p(struct _u3_cs_cart) nex_p;
      } u3_cs_cart;

    /* u3_cs_arvo: modern arvo structure.
    */
      typedef struct _u3_cs_arvo {
        c3_d    ent_d;                    //  event number
        u3_noun yot;                      //  cached gates
        u3_noun now;                      //  current time, as noun
        u3_noun wen;                      //  current time, as text
        u3_noun sev_l;                    //  instance number
        u3_noun sen;                      //  instance string
        u3_noun own;                      //  owner list

        u3_noun roe;                      //  temporary unsaved events
        u3_noun key;                      //  log key, or 0

        u3_noun ken;                      //  kernel formula
        u3_noun roc;                      //  kernel core

        struct {                          //  ova waiting to process
          u3p(u3_cs_cart) egg_p;          //  exit of ovum queue
          u3p(u3_cs_cart) geg_p;          //  entry of ovum queue
        } ova;
      } u3_cs_arvo;