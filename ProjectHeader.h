//
//  DHeader.h
//  DoctorApp
//
//  Created by isquare2 on 4/7/16.
//  Copyright © 2016 isquare2. All rights reserved.
//

#ifndef DHeader_h
#define DHeader_h

#define DATABASEURL @"http://un-wind.me/app/webservice/"
#define BORDERCOLOR  [UIColor colorWithRed:73.0/255.0 green:207.0/255.0 blue:182.0/255.0 alpha:1.0].CGColor
#define BACKGROUNGCELL [UIColor colorWithRed:73.0/255.0 green:207.0/255.0 blue:182.0/255.0 alpha:1.0]
#define kGlobalColor [UIColor colorWithRed:(77.0f/255.0f) green:(215.0f/255.0f) blue:(215.0f/255.0f) alpha:0.8f]

#define InternetMessage @"Check Internet Connection."



#define ALERT_VIEW(title,msg)\
{\
UIAlertView *av = [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];\
[av show];\
}

#define DEGREES_TO_RADIANS(degrees)((M_PI * degrees)/180)


#endif /* DHeader_h 
#define ALERT_VIEW(title,msg)\
{\
UIAlertView *av = [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];\
[av show];\
}
UIAlertAction* yesButton = [UIAlertAction\
actionWithTitle:@"Yes"\
style:UIAlertActionStyleDefault\
handler:^(UIAlertAction * action)\
{\
}];\
[alert addAction:yesButton];\

UIAlertController * alert=   [UIAlertController\
alertControllerWithTitle:title\
message:msg\
preferredStyle:UIAlertControllerStyleAlert];\
UIAlertAction* noButton = [UIAlertAction\
actionWithTitle:@"OK"\
style:UIAlertActionStyleDefault\
handler:^(UIAlertAction * action)\
{\
}];\
[alert addAction:noButton];\
[self presentViewController:alert animated:YES completion:nil];\
*/
