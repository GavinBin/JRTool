//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKTableViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class CommentView, EmotionView, InsertView, LinkView, NSMutableArray, NSMutableDictionary, NSString, TPKeyboardAvoidingScrollView, UIImage;

@interface KeyBoardViewController : KKTableViewController <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    CommentView *_commentView;
    EmotionView *_emotionView;
    _Bool _isShowKeyboard;
    _Bool _isShowEmotion;
    _Bool _isHiddenKeyboard;
    _Bool _shouldShowBottomBar;
    NSString *_content;
    UIImage *_selectImage;
    InsertView *_insertView;
    LinkView *_linkView;
    TPKeyboardAvoidingScrollView *_customTransparentView;
    NSMutableDictionary *_insertParamDic;
    NSMutableArray *_paramDic;
    struct CGSize _thumbSize;
}

@property(retain, nonatomic) NSMutableArray *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) NSMutableDictionary *insertParamDic; // @synthesize insertParamDic=_insertParamDic;
@property(retain, nonatomic) TPKeyboardAvoidingScrollView *customTransparentView; // @synthesize customTransparentView=_customTransparentView;
@property(retain, nonatomic) LinkView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) InsertView *insertView; // @synthesize insertView=_insertView;
@property(nonatomic) _Bool shouldShowBottomBar; // @synthesize shouldShowBottomBar=_shouldShowBottomBar;
@property(nonatomic) _Bool isHiddenKeyboard; // @synthesize isHiddenKeyboard=_isHiddenKeyboard;
@property(nonatomic) struct CGSize thumbSize; // @synthesize thumbSize=_thumbSize;
@property(retain, nonatomic) UIImage *selectImage; // @synthesize selectImage=_selectImage;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool isShowEmotion; // @synthesize isShowEmotion=_isShowEmotion;
@property(nonatomic) _Bool isShowKeyboard; // @synthesize isShowKeyboard=_isShowKeyboard;
@property(retain, nonatomic) EmotionView *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) CommentView *commentView; // @synthesize commentView=_commentView;
- (void).cxx_destruct;
- (void)commentViewLayout:(_Bool)arg1;
- (void)sendImage:(id)arg1;
- (void)hideCustomView;
- (id)replaceInsertType:(id)arg1;
- (id)paramDicInfo;
- (void)saveInsertType:(id)arg1 andParamId:(id)arg2 andTitle:(id)arg3;
- (void)liveRoomInfo;
- (void)showCustomTransparentView;
- (void)tapTransparentView:(id)arg1;
- (void)handleInsertStr:(id)arg1;
- (void)openCamera;
- (void)openPhotoLibrary;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showImage;
- (void)hideKeyboard;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideCommentView;
- (void)keyboardWillDisappear:(id)arg1 withKeyboardRect:(struct CGRect)arg2;
- (void)keyboardWillAppear:(id)arg1 withKeyboardRect:(struct CGRect)arg2;
- (void)showCommentKeyboard;
- (void)hideEmotionView;
- (void)showEmotionViewWithBottomBar:(_Bool)arg1;
- (void)isShowInsertView:(_Bool)arg1;
- (void)submitContent;
- (id)warningMessage;
- (id)getEmotionArrayFromPlainText:(id)arg1;
- (void)HideCommentView;
- (void)showCommentView;
- (id)transformEmotionArrayToFormatPlainText:(id)arg1;
- (void)delText;
- (void)addEmotionText:(long long)arg1;
- (void)closeKeyboardEmotionBoard;
- (void)inputTextViewWithStock:(id)arg1 andStockString:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)removeBottombar;
- (void)addBottombar;
- (void)showKeyboardBottomBar:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (Class)tableViewClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
