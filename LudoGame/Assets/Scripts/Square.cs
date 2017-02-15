using UnityEngine;
using System.Collections;

public class Square : MonoBehaviour {
	SquareBehaviour sb;
	// Use this for initialization
	void Start () {
		Transform t = this.GetComponent<Transform>();
		sb = new SquareBehaviour(t.position);	
	}
	public void SetPosition(Vector3 v){
		this.transform.position = v;
	}
	public string State { get { return sb.State;} set { sb.State = value; }}
}
