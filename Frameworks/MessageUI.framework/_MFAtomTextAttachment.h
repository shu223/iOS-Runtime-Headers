/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFAtomTextAttachment : NSTextAttachment {
    MFModernComposeRecipientAtom * _atomView;
    BOOL  _isPlaceholder;
}

@property (nonatomic, retain) MFModernComposeRecipientAtom *atomView;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic, readonly) MFComposeRecipient *recipient;

- (id)atomView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { float x1; float x2; })arg3 characterIndex:(unsigned int)arg4;
- (id)attributedStringWithBaseAttributes:(id)arg1;
- (void)dealloc;
- (id)imageForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned int)arg3;
- (id)initWithAtomView:(id)arg1;
- (BOOL)isPlaceholder;
- (id)recipient;
- (void)setAtomView:(id)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;

@end
