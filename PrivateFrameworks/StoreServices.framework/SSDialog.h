/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSArray;



@interface SSDialog : NSObject 
{
    NSArray *_buttons;
    NSDictionary *_dialogDictionary;
}

@property(readonly) NSString *message;
@property(readonly) NSString *title;
@property(readonly) NSArray *buttons;
@property(readonly) SSDialogButton *defaultButton;
@property(readonly) NSString *dialogKind;


- (id)dialogKind;
- (id)buttons;
- (id)defaultButton;
- (id)message;
- (id)valueForProperty:(id)arg1;
- (id)title;
- (id)init;
- (void)dealloc;
- (id)initWithDialogDictionary:(id)arg1;

@end