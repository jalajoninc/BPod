//
//  ViewController.swift
//  TestBench
//
//  Created by John Blaine on 9/20/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import iLogin
import iHome
import iRating
import iEasy

class ViewController: UIViewController {

    var login : iLogin?
    var home : iHome?
    var rating : iRating?
    var easy : iEasy?

    var sView : UIScrollView?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        sView = UIScrollView(frame: CGRect.zero)
        self.view.addSubview(sView!)

        login = iLogin(frame: CGRect.zero)
        sView?.addSubview(login!)

        rating = iRating(frame: CGRect.zero)
        sView?.addSubview(rating!)
        
        home = iHome(frame: CGRect.zero)
        sView?.addSubview(home!)
        
        easy = iEasy(frame: CGRect.zero)
        sView?.addSubview(easy!)

        home?.testing()
        
        self.watchAction()
        
        
        let m = UIImage(named: "key")
        easy?.addText("Full Name", x: 0.1, y: 0.1, w: 0.8, h: 0.08, photo: UIImage(named: "person") )
        easy?.addText("Password", x: 0.1, y: 0.2, w: 0.8, h: 0.08, photo:  UIImage(named: "key" ) )
        
        easy?.addText( "Occupation", x: 0.1, y: 0.3, w: 0.8, h: 0.08, photo: nil )
        easy?.refresh()
    }

    func watchAction() {
        login?.watchAction(1, login: { ( usr : String?, pwd : String?) -> Bool in
            return false
        }, reg: { (name : String?, phone : String?) -> Bool in
            return false
        }, forget: { (phone : String?) -> Bool in
            return false
        }, createPwd: { (pwd : String?) -> Bool in
            return false
        }, verify: { (code : String?) -> Bool in
            return false
        })
        
        rating?.watchAction(2.0, rating: { (v : CGFloat) -> Bool in
            print("val : ", v)
            return false
        })
        
    }
    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        
        sView?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
        sView?.contentSize = CGSize(width: w * 1.0, height: h * 4.0)
        
        easy?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)

//        home?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)

//        login?.frame = CGRect(x: w * 0.1, y: h * 1.5, width: w * 0.8, height: h * 0.4)
//        
//        rating?.frame = CGRect(x: w * 0.2, y: h * 1.1, width: w * 0.6, height: h * 0.05)
        
    }

}

