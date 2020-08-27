//
//  BCoreDefines.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 25/11/2015.
//
//

#ifndef BCoreDefines_h
#define BCoreDefines_h

#define bProfilePictureSize CGSizeMake(300, 300)

// How longer after the user stops typing until the recipient
// stops seeing the "typing" indicator
#define bTypingTimeout 5.0
#define bLocationDefaultArea 1000

#define bDefaultFontSize 17
#define bDefaultUserNameLabelSize 14

#define bDefaultTextInputBackgroundColor @"FFFFFF"
#define bDefaultTextInputTextColor @"000000"
#define bDefaultTextInputPlaceholderColor @"555555"

#define bDefaultMessageColorMe @"abcff4"
#define bDefaultMessageColorReply @"d7d4d3"

#define bDefaultTextInputPlaceholderText [NSBundle t:bWriteSomething]
#define bTitleSendButton [NSBundle t:bSend]

#endif /* BCoreDefines_h */
