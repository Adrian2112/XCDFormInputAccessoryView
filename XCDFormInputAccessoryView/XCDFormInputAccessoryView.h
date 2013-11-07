//
//  XCDFormInputAccessoryView.h
//
//  Created by Cédric Luthi on 2012-11-10
//  Copyright (c) 2012 Cédric Luthi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol XCDFormInputAccessoryViewDelegate;

@interface XCDFormInputAccessoryView : UIView

- (id) initWithResponders:(NSArray *)responders; // Objects must be UIResponder instances

@property (nonatomic, strong) id <XCDFormInputAccessoryViewDelegate> delegate;

@property (nonatomic, strong) NSArray *responders;

@property (nonatomic, assign) BOOL hasDoneButton; // Defaults to YES on iPhone, NO on iPad

- (void) setHasDoneButton:(BOOL)hasDoneButton animated:(BOOL)animated;
- (void)enableNextButton:(BOOL)enable;
- (void)enablePreviousButton:(BOOL)enable;

@end

@protocol XCDFormInputAccessoryViewDelegate <NSObject>

-(void)formInputAccessoryViewDidClickNextButton:(XCDFormInputAccessoryView *)formInputAccessoryView;
-(void)formInputAccessoryViewDidClickPreviousButton:(XCDFormInputAccessoryView *)formInputAccessoryView;

@end